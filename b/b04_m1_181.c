section "b04_m1_181"{
    if (Parameter_GetPl1Param(338) == 1){
        Background_Bg_GS2("BG_NE610_CO_0", #1, #1, 0);
        SoundEffect_PlayStream(2, "SS_DSE_234_000");
        Screen_WipeIn(2);
        }
    else if (Parameter_GetPl1Param(338) == 2){
        Background_Bg_GS2("BG_NE620_CO_0", #1, #1, 0);
        SoundEffect_PlayStream(2, "SS_DSE_234_000");
        Screen_WipeIn(2);
        }
    else if (Parameter_GetPl1Param(338) == 3){
        Background_Bg_GS2("BG_NE630_CO_0", #1, #1, 0);
        SoundEffect_PlayStream(2, "SS_DSE_234_000");
        Screen_WipeIn(2);
        }
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
    Character_ChFace(0, 2, 3);
    Character_ChFace(0, 3, 2);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movies was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0401181_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "How can your nerves be so strong...?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("B0401181_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I thought that you should at least\nhave fun.\nBut what will you do about this fear\nI have...?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(1, 3, (#1), 2);
        Character_ChFace(1, 3, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401181_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I...\nknow that this will definitely show\nup in my dreams tonight.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
