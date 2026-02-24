section "b04_m3_046"{
    Background_Bg_GS2("BG_WF460_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 4);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0403046_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nYou thought something like that was\nthe best?\nI could not understand it at all.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0403046_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... Excuse me.\nIf you'll pardon my opinion, calling\nit \"so-so\" is still praising it too\nmuch.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(3, 3, (#1), 2);
        Character_ChFace(1, 3, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403046_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Yes... You thought so too.\nEven though it was unexpected, I\nfeel like it has taken away our\nprecious time.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
