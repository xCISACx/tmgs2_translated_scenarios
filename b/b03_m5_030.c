section "b03_m5_030"{
    if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 0)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 2, (#1), 2);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0305030_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "We're here. Let's go in.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 31);
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 0)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 5);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305030_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now then, what should we do?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to watch the Orca Show.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305030_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nLet's take our time looking around.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 31);
            break ;
            case 1:
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305030_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That's a good idea.\nSince we're watching, let's get\nfront row seats so we can be sprayed\nwith water.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 32);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 1)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305030_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now then, what should we do?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to see the Large Fish Tank.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305030_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nLet's see what it's like to slowly\nwalk through the water.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 31);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0305030_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "There's whale sharks there, right?\nI wanted to see them, too. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 33);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 1)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 5);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305030_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Do you have somewhere you wanna go?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to watch the Orca Show.", "I want to see the Large Fish Tank.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305030_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Right.\nLet's see what it's like to slowly\nwalk through the water.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 31);
            break ;
            case 1:
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Voice_PlayVoice("B0305030_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Orca show...\nAh, it looks like we made it in time\nfor a show.\nLet's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 32);
            break ;
            case 2:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Voice_PlayVoice("B0305030_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "There's whale sharks there, right?\nI wanted to see them, too. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 33);
            break ;
            }
        }
    }
