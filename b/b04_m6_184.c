section "b04_m6_184"{
    Background_Bg_GS2("BG_NE660_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_234_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movie was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0406180_F01800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh... is that so? I'm a little...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Character_ChFace(0, 2, 3);
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0406180_F01900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, that so? I'll let you pass.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406180_F02000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so?\nI didn't like the content very much.");
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Message_PauseSkinship();
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F02100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, you could say that.\nIt was honestly a so-so result.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F02200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, did you think so too?\nThe lacking really stood out.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406180_F02300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Did you think so too, Senpai?\nIt wasn't that good, especially the\nlast part.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        }
    }
