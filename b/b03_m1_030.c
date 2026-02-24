section "b03_m1_030"{
    if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 0)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Message_ResumeSkinship();
        Voice_PlayVoice("B0301030_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 31);
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 0)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 0, 11);
        Character_BlinkStart(1, 2, (#1), 2);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301030_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Eh, so they have an Orca Show.\nWhat should we do?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to watch the Orca Show.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301030_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 31);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(1, 2, (#1), 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301030_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Right. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 32);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 1)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301030_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "They've got a lot of exhibitions.\nWhat do you wanna see?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to see the Large Fish Tank.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301030_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 31);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301030_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "To see the whale sharks, huh.\nThat's a good idea. Let's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 33);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 1)){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(1, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0301030_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "They've got a lot of exhibitions.\nWhat do you want to see?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to watch the Orca Show.", "I want to see the Large Fish Tank.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301030_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 31);
            break ;
            case 1:
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301030_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.\nIt would be nice if we could get\ngood seats.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 32);
            break ;
            case 2:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301030_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "To see the whale sharks, huh.\nThat's a good idea. Let's go!");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 33);
            break ;
            }
        }
    }
