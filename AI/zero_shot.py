import torchaudio
from IPython.display import Image, display
from autogluon.multimodal import download, MultiModalPredictor

frame_urls = [
    "1.jpg",
    "2.jpg",
    "3.jpg",
    "4.jpg"
   
]

# Initialize the MultiModalPredictor
predictor = MultiModalPredictor(problem_type="zero_shot_image_classification")

# Define class labels
class_labels = [
    'No crash',
    'Car crashed'
]

# Process each frame
for frame_url in frame_urls:
    frame_image = download(frame_url)
    pil_img = Image(filename=frame_image)
    display(pil_img)

    # Predict probabilities for the frame
    prob = predictor.predict_proba({"image": [frame_image]}, {"text": class_labels})
    print(f"Frame probabilities for {frame_url}:", prob)
