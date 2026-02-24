section "p14_s1_000"{
    if (Parameter_bunka_jyu(0) == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(14, "S1_04F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        SoundEffect_PlayStream(3, "SS_DSE_075_000");
        Voice_PlayVoice("P0414000_N00000", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Thank you for the meal!\nYeah, that was delicious!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, yeah.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(14, 2, (#1));
        Voice_PlayVoice("P0414000_N00100", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Sis is a suitable waitress.\nYou seem like a pro.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh, really?\nA professional waitress...?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(14, 3, (#1));
        Voice_PlayVoice("P0414000_N00200", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Yeah.\nCan you imagine how good you must\nbe～.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nWhat kind of imagination is that.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I guess I should be happy I was\npraised a little?)");
        }
    else {
        SoundEffect_PlayStream(3, "SS_DSE_075_000");
        Character_ChFace(0, 0, 9);
        Character_Chara_GS2(14, "S1_04F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0414000_N00300", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Sis...\nWhy does this tea smell so much like\nblack coffee?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, I'm sorry! It is coffee...");
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("P0414000_N00400", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "Stay level-headed.\nDidn't I ask for a set of tea and\ncake?");
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(14, 3, (#1));
        Voice_PlayVoice("P0414000_N00500", #1, "");
        Message_Who(14);
        Message_MsgDisp("Yuu", "*Sigh*... I'm a little disappointed.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh...\nThere aren't any words for me to\nrespond to that with...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(14, 86, 1);
    }
