section "b03_m3_030"{
    Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 0)){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Voice_PlayVoice("B0303030_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The Aquarium, huh.\nIt seems like there are lots of\nthings we should be able to learn\nhere.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 31);
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 0)){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303030_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The route splits here...\nWhat are you interested in?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to watch the Orca Show.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303030_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see. Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 31);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303030_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay, let us go.\nI am really interested in seeing\nwhat kind of things an orca can do.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 32);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 1)){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303030_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The route splits here...\nWhat are you interested in?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to see the Large Fish Tank.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303030_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay. Let us go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 31);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303030_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Okay.\nIt seems like there are a number of\nwhale sharks there.\nAlright, let us go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 33);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 1)){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303030_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "You can decide what we will see\ntoday.\nSo, what do you prefer?");
        Message_MsgSel("Let's go to the Aquarium.", "I want to watch the Orca Show.", "I want to see the Large Fish Tank.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303030_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Okay. Let us go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 31);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303030_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "An orca show, huh.\nThat sounds like a good idea.\nLet us go and see it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 32);
            break ;
            case 2:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0303030_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Okay.\nIt seems like there are a number of\nwhale sharks there.\nAlright, let us go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M3", 33);
            break ;
            }
        }
    }
