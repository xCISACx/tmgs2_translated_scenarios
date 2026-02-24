section "b03_m1_150"{
    if (Date_ChkDateOpen(44) == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 5);
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
        Voice_PlayVoice("B0301150_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "So, should we go?");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M1", 151);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 4);
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
        Voice_PlayVoice("B0301150_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I'm fine with either....\nWhat do you wanna do?");
        Message_MsgSel("Let's go bowling.", "Let's go to the darts corner.");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301150_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Okay.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 151);
            break ;
            case 1:
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 1);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0301150_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Got it.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M1", 152);
            break ;
            }
        }
    }
