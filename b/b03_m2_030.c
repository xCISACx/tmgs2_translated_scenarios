section "b03_m2_030"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
    Background_Bg_GS2("BG_WF300_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 0)){
        Voice_PlayVoice("B0302030_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Let's go in.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 31);
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 0)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0302030_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It looks like there's a show on....\nWhat should we do?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right...");
        Message_MsgSel("Let's go to the Aquarium.", "I want to watch the Orca Show.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302030_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 31);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302030_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Alright. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 32);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 0) && (Date_ChkDateOpen(6) == 1)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0302030_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... So, what should we do?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Message_MsgSel("Let's go to the Aquarium.", "I want to see the Large Fish Tank.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302030_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 31);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302030_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's go see it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 33);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(5) == 1) && (Date_ChkDateOpen(6) == 1)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0302030_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... So, what should we do?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Message_MsgSel("Let's go to the Aquarium.", "I want to watch the Orca Show.", "I want to see the Large Fish Tank.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302030_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 31);
            break ;
            case 1:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302030_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 32);
            break ;
            case 2:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302030_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Let's go see it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 33);
            break ;
            }
        }
    }
