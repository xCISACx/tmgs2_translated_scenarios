section "h24_m8_000"{
    Character_ChFace(0, 0, 0);
    if (Parameter_GetCh1Param(8, 130) < 4){
        Character_Chara_GS2(8, "M8_01F", 0);
        }
    else {
        Character_Chara_GS2(8, "M8_??F", 0);
        }
    if (Parameter_GetCh1Param(8, 130) < 4){
        Voice_PlayVoice("H2408000_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh, is this a practice match～.\nHow refreshing.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nWhat is the matter?\nWhy are you here...");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H2408000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I need a signature from your\nadvisor.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, you came here on a job...");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H2408000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "But since I'm here, I'll cheer for\nyou.\nI will be watching you play.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ahaha, then I'll get more fired up\nand do my best!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I didn't think\n｛Masaki＊＊｝ would come.\nAlright, I'll do my best!)");
        }
    else {
        Voice_PlayVoice("", 8, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝!?\nWhy are you here!?");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("H2408000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Obviously to cheer you on.\nSo, how about it?\nDoes it seem like you'll win?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes. I am confident!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H2408000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Hmm, good expression.\nI'll be expecting to see you play\nwell!\nDo your best!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Alright, I'll do my best to show\n｛Masaki＊＊｝ my good\npoints!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
