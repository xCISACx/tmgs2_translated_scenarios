section "b04_m3_094"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 5);
    Background_Bg_GS2("BG_FP440_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_440_000", 127, 40);
    Voice_PlayVoice("B0403094_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", ".........\nDo you understand what is good about\nthis piece?");
    Message_MsgSel("... No, I'm clueless.", "What about you, ｛Hikami＊＊｝?", "It embodies the fear of the unknown.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403094_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... I see.\nIt seems like I am not the only one.\nThere is no use staying here any\nlonger, then.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403094_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Your understanding is quite\nprofound...\nEven the curator seems astonished.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(3, 3, (#1), 1);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0403094_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "If I knew, I would not have asked\nyou.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
