section "b03_m4_160"{
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
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Voice_PlayVoice("B0304160_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Okay, let's go.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M4", 161);
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 0)){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304160_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Anything you want to play?");
        Message_MsgSel("Let's try the arcade.", "Let's do token games.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304160_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, that sounds good.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 161);
            break ;
            case 1:
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304160_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh... Oh, well. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 162);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 0) && (Date_ChkDateOpen(47) == 1)){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304160_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well... What do you want to do?");
        Message_MsgSel("Let's try the arcade.", "Let's try music games!");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304160_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah. Do you play fairly?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 161);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304160_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Alright! Okay, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 163);
            break ;
            }
        }
    else if ((Date_ChkDateOpen(46) == 1) && (Date_ChkDateOpen(47) == 1)){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0304160_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well... What do you want to do?");
        Message_MsgSel("Let's try the arcade.", "How about token games?", "Let's try music games!");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 0, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304160_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah. Do you play fairly?");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 161);
            break ;
            case 1:
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304160_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're not allowed to be a\nspoilsport.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 162);
            break ;
            case 2:
            Character_ChFace(1, 0, 10);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0304160_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Alright! Okay, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M4", 163);
            break ;
            }
        }
    }
