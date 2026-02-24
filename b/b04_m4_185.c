section "b04_m4_185"{
    if (Parameter_GetPl1Param(338) == 2){
        Background_Bg_GS2("BG_NE670_CO_0", #1, #1, 0);
        SoundEffect_PlayStream(2, "SS_DSE_234_000");
        Screen_WipeIn(2);
        }
    else if (Parameter_GetPl1Param(338) == 3){
        Background_Bg_GS2("BG_NE680_CO_0", #1, #1, 0);
        SoundEffect_PlayStream(2, "SS_DSE_234_000");
        Screen_WipeIn(2);
        }
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movie was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1), 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0404185_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Is it?\nTo be honest, it was dull to me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(4, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404185_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Right.\nNot good, but not bad either...\nI think they could have made it a\nlittle more interesting...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(4, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404185_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Indeed, but just saying it was\nboring is boring too.\nWell, that's that.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
