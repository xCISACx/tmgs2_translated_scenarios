section "b04_m7_023"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 0);
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 5);
    Background_Bg_GS2("BG_WF230_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0407023_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "The Bayside Bridge Observatory is a\nlong name.\nI've decided to call it BSBT.");
    Message_MsgSel("Even when it's short, it's still too long.", "How about \"Yellowtail exhibition\"?", "It doesn't need to be fixed.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407023_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... Still?\nIs that so, here I thought it was\nshort.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(7, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0407023_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yellowtail exhibition sounds good!\nLet's use it.\nWe'll spread the word to everyone.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(7, 3, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0407023_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I think BSBT is good...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
