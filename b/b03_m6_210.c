section "b03_m6_210"{
    Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 0)){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306210_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, shall we go?");
            }
        else {
            Voice_PlayVoice("B0306210_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Did you buy a ticket? Then let's go.");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M6", 211);
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 0)){
        Message_MsgSel("Invite to go to Puppy and Kitten Land.", "Don't invite.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Voice_PlayVoice("B0306210_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Puppy and Kitten Land...\nIt's a pretty name.\nWell it's good, let's go.");
                }
            else {
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 1);
                Voice_PlayVoice("B0306210_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Are there only dogs and cats? ...\nWell, let's go.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 212);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306210_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Then, shall we enter?");
                }
            else {
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0306210_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, let's go.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 211);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 1)){
        Message_MsgSel("Let's go see the White Tiger.", "Don't invite.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306210_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good.\nWe can go to the zoo to see a\nspecial rare thing.");
                }
            else {
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306210_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Why is the White Tiger so rare?\nI want to see it!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 213);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 3, (#1), 2);
                Voice_PlayVoice("B0306210_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, let's go.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0306210_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Where do you want to go?");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 211);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 1)){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Message_MsgSel("Invite to go to Puppy and Kitten Land.", "Let's go see the White Tiger.", "Don't invite to neither one.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0306210_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yes, let's do it.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Voice_PlayVoice("B0306210_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that's good.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 212);
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306210_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good.\nWe can go to the zoo to see a\nspecial rare thing.");
                }
            else {
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306210_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Why is the White Tiger so rare?\nI want to see it!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 213);
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 3, (#1), 2);
                Voice_PlayVoice("B0306210_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well then, let's go.");
                }
            else {
                Character_ChFace(1, 0, 10);
                Voice_PlayVoice("B0306210_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Then let's go.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 211);
            break ;
            }
        }
    }
