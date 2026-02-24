section "p14_m1_000"{
    if (Parameter_bunka_jyu(0) == 1){
        Character_ChFace(0, 0, 11);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_Chara_GS2(1, "M1_01F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0401000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... Huh?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(1, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P0401000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "... It's delicious.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hooray!");
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(1, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P0401000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Considering it's from a Culture\nFestival program.\nHowever, heh...\nDid you make it, correctly?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well, of course!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("P0401000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Well done, well done.\nI'll take another refill.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
        }
    else {
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(1, "M1_01F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0401000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "... How is it?");
        Character_ChFace(0, 0, 11);
        Voice_PlayVoice("P0401000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I get it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 4);
        Voice_PlayVoice("P0401000_A00600", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It's deep brewed and\nfrench-roasted...\nBu, you completely made it wrong.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～... Real big mistake.)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
