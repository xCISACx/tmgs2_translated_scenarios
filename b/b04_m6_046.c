section "b04_m6_046"{
    Background_Bg_GS2("BG_WF460_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    SoundEffect_StopStream(2, 40);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so.\nI was able to enjoy it in my own\nway.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "If you say so.\nWell, didn't it seem like it was\nlacking?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(6, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I think so, too.\nThough it was slightly lacking, it\nwas good we came.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Oh, you also think so?\nSome of the scenes were lacking.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("B0406040_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Haha... Harsh.\nI was able to enjoy it in my own\nway...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(6, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0406040_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That's harsh, Senpai.\nWell, I do think the scenes were\nlacking.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        }
    }
