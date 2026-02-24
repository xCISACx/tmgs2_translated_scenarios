section "p14_m5_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(5, "M5_01F", 0);
    Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_bunka_jyu(0) == 1){
        Voice_PlayVoice("P0405000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Thanks for the food.");
        Message_Who(0);
        Message_MsgDisp("主人公", "How did it taste?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P0405000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It was so yummy～.\nSo yummy that I don't want it to\njust be for the Culture Festival,\nbut for a school cafe.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ahaha, you're praising us too much.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("P0405000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "No～, I'm real serious.\nHmm, maybe I could ask someone...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Chris＊＊｝ really looks\nlike he is going to...\nBut I'm glad that he was happy!)");
        }
    else {
        Voice_PlayVoice("P0405000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hey. Is it supposed to be salty?\nOr sweet?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh!?");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("P0405000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "The word to describe this kinda\ntime...\nUhh... Odd?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uh...");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(5, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P0405000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "So this is what a Culture Festival\nis.\nI'm so touched.");
        Character_Chara_GS2(5, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh, I failed...\nI probably wasn't attentive\nenough...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
