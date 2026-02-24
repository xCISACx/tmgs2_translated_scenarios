section "b03_m2_150"{
    Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
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
        Message_PauseSkinship();
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝, are you good\nat bowling?");
        Voice_PlayVoice("B0302150_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "\"Good\"... Well, I'm okay at it....\nLet's go.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay!");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M2", 151);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Message_PauseSkinship();
        Voice_PlayVoice("B0302150_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "What do you wanna do?");
        Message_MsgSel("Bowling.", "Darts.");
        switch (Message_TextSelect()){
            case 0:
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302150_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay. Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 151);
            break ;
            case 1:
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(1, 3, 3);
            Message_ResumeSkinship();
            Voice_PlayVoice("B0302150_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Ah... Let's go.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_Call_GS2("B04", "M2", 152);
            break ;
            }
        }
    }
