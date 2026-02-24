section "p14_m7_000"{
    if (Parameter_bunka_jyu(0) == 1){
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Character_Chara_GS2(7, "M7_17F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0407000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Yes, thank you, I enjoyed it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Excuse me, how did the sandwich\ntaste?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P0407000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It was perfect!\nThe other visitors were pleased,\ntoo.\nWho made them?");
        Message_Who(0);
        Message_MsgDisp("主人公", "As a matter of fact, it was me.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("P0407000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Really? Excellent, excellent!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Wakaouji＊＊｝!)");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_17F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0407000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Sensei was a little surprised.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh!? What's the matter?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P0407000_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "The sandwich, you made it.\nWhat did you put in the deep-fryer?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Uhh... It was shrimp.\nIt was a shrimp cutlet sandwich.");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P0407000_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... A shrimp cutlet sandwich.\nIt smelled like American crawfish.\nAstonishing nostalgia.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh, it seems like it was smelly...\nA big failure...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
