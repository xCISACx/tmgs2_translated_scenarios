section "b03_m2_210"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 0)){
        Voice_PlayVoice("B0302210_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Shall we go?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M2", 2) == 0){
            System_Call_GS2("B04", "M2", 211);
            }
        else {
            System_Call_GS2("B05", "M2", 2);
            }
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 0)){
        Message_PauseSkinship();
        Message_MsgSel("Let's go to Puppy and Kitten Land.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0302210_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Puppies and kittens...\nLet's check it out.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 212);
            break ;
            case 1:
            Voice_PlayVoice("B0302210_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nFor the time being, let's just go\nin.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M2", 2) == 0){
                System_Call_GS2("B04", "M2", 211);
                }
            else {
                System_Call_GS2("B05", "M2", 2);
                }
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Let's go see the white tiger.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0302210_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah, it's rare. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 213);
            break ;
            case 1:
            Voice_PlayVoice("B0302210_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWell, let's just go in for the time\nbeing.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M2", 2) == 0){
                System_Call_GS2("B04", "M2", 211);
                }
            else {
                System_Call_GS2("B05", "M2", 2);
                }
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 1)){
        Message_PauseSkinship();
        Message_MsgSel("Do you want to go to Puppy and Kitten Land?", "Let's go see the white tiger.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0302210_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Alright.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 212);
            break ;
            case 1:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0302210_B00400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah, it's rare. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 213);
            break ;
            case 2:
            Voice_PlayVoice("B0302210_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWell, let's just go in for the time\nbeing.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M2", 2) == 0){
                System_Call_GS2("B04", "M2", 211);
                }
            else {
                System_Call_GS2("B05", "M2", 2);
                }
            break ;
            }
        }
    }
