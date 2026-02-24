section "b04_m8_181"{
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
    Character_Chara_GS2(8, "M8_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movie was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_ChFace(1, 4, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0408181_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "It was interesting! Double circle!\nAh, I wanna watch it one more\ntime...");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(8, 2, (#1), 1);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0408181_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "So-so? Really...\nMaybe for you it was...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(8, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0408181_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I guess it can't be helped since it\ndepends on tastes...\nBut still, do something about the\nway you say things.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    }
