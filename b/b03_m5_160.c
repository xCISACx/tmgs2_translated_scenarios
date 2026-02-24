section "b03_m5_160"{
    Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
    if (Date_ChkDateOpen(47) == 1){
        Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(46) == 1){
        Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
        }
    else {
        Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
        }
    Screen_WipeIn(2);
    if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 0)){
        Voice_PlayVoice("B0305160_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now then, let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 161);
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 0)){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0305160_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What do you wanna do?");
        Message_MsgSel("Let's play video games.", "What about token games?");
        switch (Message_TextSelect()){
            case 0:
            Character_BlinkStart(5, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305160_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nBut it would have been even better\nif it didn't matter whether you win\nor lose...");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 161);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305160_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm actually good at token games.\nI'll earn heaps of tokens for you▼");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 162);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 1)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0305160_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now then, what should we do?");
        Message_MsgSel("Let's play video games.", "Let's play music games!");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305160_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. Now then, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 161);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305160_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That seems fun. Yeah, let's try.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 163);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 1)){
        Message_PauseSkinship();
        Voice_PlayVoice("B0305160_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Now then, what should we do?");
        Message_MsgSel("Let's play video games.", "What about token games?", "Let's play music games!");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305160_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. Now then, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 161);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305160_E00600", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay.\nI'm going to collect so many tokens\nthat it will make you jealous▼");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 162);
            break ;
            case 2:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305160_E00700", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "That seems fun. Yeah, let's try.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 163);
            break ;
            }
        }
    }
