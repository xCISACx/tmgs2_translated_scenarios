section "p24_s1_000"{
    if (Parameter_bunka_jyu(0) == 1){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(14, "S1_04F", 0);
        Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "This way, please!");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("P1414000_N00000", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Heehee～! Sis looks cool.\nYou're all glittery!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Over here in the black light corner!\nMy white shirt looking bright is\ninteresting?");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("P1414000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Yeah! Interesting!!");
        Character_BlinkStart(14, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("P1414000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "You look like a ghost.\nIt certainly frightened me!\nHey, a good idea just came to me.\nYou see...");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("P1414000_N00300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "There's a ball hanging from the\nceiling!\n...\nIt surely looks like a supernatural\nball.\nHey! I guess it's nice?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yuu-kun seems happy!\nBut there isn't a haunted house\nhere...)");
        }
    else {
        Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Huh? Yuu-kun isn't...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yuu-kun? Where are you?");
        Character_ChFace(0, 0, 8);
        Character_Chara_GS2(14, "S1_04F", 0);
        Voice_PlayVoice("P1414000_N00400", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "... Sis.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah! Yuu-kun.");
        Character_BlinkStart(14, 3, (#1));
        Voice_PlayVoice("P1414000_N00500", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "I lost sight of the visitors...\nI think.");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(14, 2, (#1));
        Voice_PlayVoice("P1414000_N00600", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "*Sigh*... I'm a little disappointed.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nThere's nothing I can say to him...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 86, 1);
    }
