/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class DirtyboyAudioProcessorEditor  : public AudioProcessorEditor, public Slider::Listener
{
public:
    DirtyboyAudioProcessorEditor (DirtyboyAudioProcessor&);
    ~DirtyboyAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    
    //Slider DirtyDriveSlider;
    //Label DirtyDriveLabel;
    
    Slider DirtyMixSlider;
    Label DirtyMixLabel;
    
    ImageButton Fx;
    
    DirtyboyAudioProcessor& processor;
    
    void sliderValueChanged(Slider* slider) override;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DirtyboyAudioProcessorEditor)
};
