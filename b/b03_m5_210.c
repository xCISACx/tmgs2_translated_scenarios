section "b03_m5_210"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    Background_Bg_GS2("BG_TR300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 0)){
        Voice_PlayVoice("B0305210_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now then, let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M5", 3) == 0){
            System_Call_GS2("B04", "M5", 211);
            }
        else {
            System_Call_GS2("B05", "M5", 3);
            }
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 0)){
        Message_MsgSel("Ask to go to Puppy and Kitten Land.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 10);
            Voice_PlayVoice("B0305210_E00100", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 212);
            break ;
            case 1:
            Voice_PlayVoice("B0305210_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So we're at the zoo.\nLet's take out time.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M5", 3) == 0){
                System_Call_GS2("B04", "M5", 211);
                }
            else {
                System_Call_GS2("B05", "M5", 3);
                }
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 0) && (Date_ChkDateOpen(65) == 1)){
        Character_Chara_GS2(5, "M5_??F", 0);
        Message_MsgSel("Let's go and see the white tiger.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0305210_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems like it'll be really cool.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 213);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Voice_PlayVoice("B0305210_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So we're at the zoo.\nWhere should we go first～?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M5", 3) == 0){
                System_Call_GS2("B04", "M5", 211);
                }
            else {
                System_Call_GS2("B05", "M5", 3);
                }
            break ;
            }
        }
    else if ((Date_ChkDateOpen(64) == 1) && (Date_ChkDateOpen(65) == 1)){
        Character_Chara_GS2(5, "M5_??F", 0);
        Message_MsgSel("Do you want to go to Puppy and Kitten Land?", "Let's go and see the white tiger.", "Don't ask.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305210_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay, let's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 212);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0305210_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "It seems like it'll be really cool.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 213);
            break ;
            case 2:
            Character_ChFace(1, 2, 3);
            Voice_PlayVoice("B0305210_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "So we're at the zoo.\nWhere should we go first～?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M5", 3) == 0){
                System_Call_GS2("B04", "M5", 211);
                }
            else {
                System_Call_GS2("B05", "M5", 3);
                }
            break ;
            }
        }
    }
