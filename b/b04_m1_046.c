section "b04_m1_046"{
    Background_Bg_GS2("BG_WF460_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0401046_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Really...\nI don't think I'll ever understand\nguys who wear make-up...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0401046_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I don't like that stuff.\nI don't accept it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(1, 2, (#1), 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401046_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Wasn't it?\nLet's watch something else next\ntime.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
