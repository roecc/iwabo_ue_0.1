// Copyright Epic Games, Inc. All Rights Reserved.

#include "DialogueExtensionBPLibrary.h"
#include "DialogueExtension.h"

bool UDialogueExtensionBPLibrary::TestFunction(float Input1, int Input2, FString& ReturnValue2)
{
	ReturnValue2 = "HelloThere";
	return true;
}

/*
TArray<FString> UDialogueExtensionBPLibrary::GetOutputPinNames(UK2Node* Node)
{
    TArray<FString> OutputPinNames;

    // Ensure the provided node is valid
    if (Node != nullptr)
    {
        // Iterate through the output pins of the node
        for (UEdGraphPin* Pin : Node->Pins)
        {
            if (Pin != nullptr && Pin->Direction == EEdGraphPinDirection::EGPD_Output)
            {
                OutputPinNames.Add(Pin->PinName.ToString());
            }
        }
    }

    return OutputPinNames;
}
*/
