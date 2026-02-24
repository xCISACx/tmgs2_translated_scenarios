section "b04_m6_041"{
    Background_Bg_GS2("BG_WF410_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P63_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0406040_F02400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huh... R-Really?\nFor me it was a little..");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression.)");
            }
        else {
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0406040_F02500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Huh, it was!?\nIt wasn't good, at all!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression.)");
            }
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_BlinkStart(6, 2, (#1), 1);
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("B0406040_F02600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Is that so?\nTo me, it wasn't quite that good...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        else {
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0406040_F02700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That was so-so?\nI wonder how it passed.\nI feel like it was probably a waste\nof time.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            }
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 1);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F02800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I think so, too.\nIt was a waste of time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        else {
            Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(6, 3, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0406040_F02900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It was, wasn't it?\nAh, it was the worst.\nEspecially the end!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            }
        break ;
        }
    }
