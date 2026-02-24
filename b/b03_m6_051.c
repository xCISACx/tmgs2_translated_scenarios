section "b03_m6_051"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
        Character_ChFace(1, 2, 4);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306050_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, a festival, let's go!\nI want to look around a little.");
        }
    else {
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 1, 33);
        Character_BlinkStart(6, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF500_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306050_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, a festival! Hey, come on!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(6, "M6_D?F", 0);
    Character_ChFace(0, 0, 0);
    Background_Bg_GS2("BG_WF520_LI_2", #1, #1, 0);
    Screen_WipeIn(2);
    System_Call_GS2("B04", "M6", 53);
    System_Call_GS2("B04", "M6", 52);
    Date_NightDate(0, 1);
    }
