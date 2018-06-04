/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
DirtyboyAudioProcessorEditor::DirtyboyAudioProcessorEditor (DirtyboyAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    
    DirtyMixSlider.setRange(0.0f, 30, 0.075f);
    DirtyMixSlider.setSliderStyle(Slider::Rotary);
    
    DirtyMixSlider.setTextBoxStyle(Slider::TextBoxAbove, false, 50, 20);
    DirtyMixSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
    DirtyMixLabel.setText("Dirty Mix", dontSendNotification);
    DirtyMixLabel.setJustificationType(Justification::centred);
    
    addAndMakeVisible(&DirtyMixSlider);
    addAndMakeVisible(&DirtyMixLabel);
    
    DirtyMixSlider.addListener(this);
    
    setSize (400, 300);
}

DirtyboyAudioProcessorEditor::~DirtyboyAudioProcessorEditor()
{
}

//==============================================================================
void DirtyboyAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (25.0f);
    g.drawFittedText ("DIRTYBOY", getLocalBounds(), Justification::bottomLeft, 1);
    g.drawFittedText ("DIRTYBOY", getLocalBounds(), Justification::centredBottom, 1);
    g.drawFittedText ("DIRTYBOY", getLocalBounds(), Justification::bottomRight, 1);
    

}

void DirtyboyAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    
    DirtyMixLabel.setBounds(120, 50, 150, 90);
    
                    //        Y    X  Size  ?
    DirtyMixSlider.setBounds(120, 30, 150, 200);
    
}

void DirtyboyAudioProcessorEditor::sliderValueChanged(Slider* slider){
    if (slider == &DirtyMixSlider){
        // do something when this happens
        processor.DirtyMix = DirtyMixSlider.getValue();
    }
}
