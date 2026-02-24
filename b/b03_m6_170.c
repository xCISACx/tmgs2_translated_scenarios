section "b03_m6_170"{
    Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
    Character_ChFace(1, 0, 10);
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
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Voice_PlayVoice("B0306170_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I actually like singing. I enjoy it!");
        }
    else {
        Voice_PlayVoice("B0306170_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Hahaha!\nIt's well stocked with new music....\nLet's go!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M6", 170);
    }
