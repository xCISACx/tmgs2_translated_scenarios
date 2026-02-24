section "b04_m3_095"{
    Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 2);
    Background_Bg_GS2("BG_FP450_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_FP_450_000", 127, 40);
    Voice_PlayVoice("B0403095_C00000", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "In regards to what I know, it seems\nlike this painter is a student my\ncousin had taught.\nIt is a small world.");
    Message_MsgSel("Hmm, is that so?", "Wah, this painting is just pure genius!", "But I don't get the painting...");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0403095_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Ah, that is all....\nExcuse me for not talking about a\ntopic that can be elaborated on.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_BlinkStart(3, 2, (#1), 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403095_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Eh... Do you understand?\nThis is something that I don't\ncomprehend, so will you please\nexplain the details to me?");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_BlinkStart(3, 3, (#1), 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0403095_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Same here.\nI cannot get a grasp of how I am\nsupposed to look at this.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
