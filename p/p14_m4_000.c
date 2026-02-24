section "p14_m4_000"{
    if (Parameter_bunka_jyu(0) == 1){
        Character_ChFace(0, 0, 10);
        Character_Chara_GS2(4, "M4_17F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0404000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That was a treat!");
        Message_Who(0);
        Message_MsgDisp("主人公", "How did it taste?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(4, 3, (#1));
        Voice_PlayVoice("P0404000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Aaah, delicious!\nMaybe you slipped into a good mood\nor somethin'?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 0, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("P0404000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It was right to come here before a\nlive!\nThanks!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(He seemed pleased. Great!)");
        }
    else {
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(4, 3, (#1));
        Character_Chara_GS2(4, "M4_17F", 0);
        Background_Bg_GS2("BG_SC910_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("P0404000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", ".........");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Hariya＊＊｝?\nIs something wrong?");
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(4, 0, (#1));
        Voice_PlayVoice("P0404000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Did you taste this?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 2, 1);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("P0404000_D00500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "For the first time in my life...\nSalty lemonade!");
        Message_Who(0);
        Message_MsgDisp("主人公", "H-Huh!? I-I'm sorry!");
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("P0404000_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Think about things before you take\nmoney from other people!\nBasics, just basics!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... Real big mistake...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
