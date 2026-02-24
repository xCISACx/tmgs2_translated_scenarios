section "l03_g2_000"{
    if (Parameter_GetCh1Param(11, 315) == 0){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(11, "G2_01F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("L0311000_K00000", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... Is that chocolate?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wah, ｛Onoda＊＊｝.");
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0311000_K00100", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "That...\nis against school regulations.\nYou know that, right?\nBringing your own sweets to school\nis prohibited.");
        Message_Who(0);
        Message_MsgDisp("主人公", "But today is Valentine's Day...");
        Character_BlinkStart(11, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0311000_K00200", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "What selfish reasoning....\nI think that it is better if you\ngave up on the idea.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nBut today is supposed to be a\nspecial day...!)");
        Parameter_AddCh1Param(11, 315, 1);
        }
    else if (Parameter_GetCh1Param(11, 315) >= 1){
        Background_Bg_GS2("BG_SC210_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(11, "G2_01F", 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("L0311000_K00300", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "... That's chocolate, isn't it?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah...\nBut it's not a violation of the\nschool rules today...");
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0311000_K00400", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "Yes, that is right.\nThat is why I have also brought\nsome.");
        Character_BlinkStart(11, 2, (#1));
        Voice_PlayVoice("L0311000_K00500", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "This is specially made chocolate.\nWith high concentration, and\ncreativity, this has become the\nultimate chocolate.");
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("L0311000_K00600", #1, "");
        Message_Who(11);
        Message_MsgDisp("Onoda", "I've done lots of research for this\nday......\nThere is no way that I will lose!");
        Character_Chara_GS2(11, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(So ｛Onoda＊＊｝ has\nhandmade chocolate...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(11, 86, 1);
    }
