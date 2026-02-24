section "b03_m6_150"{
    Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
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
    if (Date_ChkDateOpen(44) == 0){
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_BlinkStart(6, 3, (#1), 2);
            Voice_PlayVoice("B0306210_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, shall we go?");
            }
        else {
            Voice_PlayVoice("B0306030_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well then, let's go!");
            }
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        if (Parameter_ChkSpEvent("B05", "M6", 2) == 0){
            System_Call_GS2("B04", "M6", 151);
            }
        else {
            System_Call_GS2("B05", "M6", 2);
            }
        }
    else if (Date_ChkDateOpen(44) == 1){
        Message_PauseSkinship();
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0306150_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Which will you do bowling or darts?");
            }
        else {
            Voice_PlayVoice("B0306150_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well... Which one do you want to do?");
            }
        Message_MsgSel("Let's do bowling.", "The darts corner sounds good.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_ResumeSkinship();
                Character_BlinkStart(6, 3, (#1), 2);
                Voice_PlayVoice("B0306150_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see. Shall we go?");
                }
            else {
                Message_ResumeSkinship();
                Voice_PlayVoice("B0306150_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I see. Well, let's get going.");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            if (Parameter_ChkSpEvent("B05", "M6", 2) == 0){
                System_Call_GS2("B04", "M6", 151);
                }
            else {
                System_Call_GS2("B05", "M6", 2);
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Message_ResumeSkinship();
                Character_ChFace(1, 2, 4);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0306150_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Sounds good! I like throwing darts.\nCome on.");
                }
            else {
                Message_ResumeSkinship();
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 4, 1);
                Voice_PlayVoice("B0306150_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I understand, Senpai! Let's go!");
                }
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M6", 152);
            break ;
            }
        }
    }
