section "b03_m5_150"{
    if (Date_ChkDateOpen(44) == 0){
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
        Voice_PlayVoice("B0305150_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Let's go in.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M5", 151);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
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
        Message_PauseSkinship();
        Voice_PlayVoice("B0305150_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "What do you wanna do?");
        Message_MsgSel("Let's go bowling.", "Let's go to the darts corner.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(5, 3, (#1), 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305150_E00200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Okay. Now then, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 151);
            break ;
            case 1:
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(5, 2, (#1), 2);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0305150_E00300", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Alright, let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M5", 152);
            break ;
            }
        }
    }
