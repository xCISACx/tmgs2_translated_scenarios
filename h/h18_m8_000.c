section "h18_m8_000"{
    if (Parameter_GetCh1Param(8, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("H1808000_H00300", 8, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yo, ｛主人公｝!");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝!?\nWhy are you here!?");
        Character_ChFace(0, 0, 10);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H1808000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I can still come here!\nAnd seeing you make that happy face,\nthere's no way that I couldn't come\nhere.");
        Character_ChFace(0, 0, 6);
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("H1808000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Also, my old school in a sporting\nevent......\nI wanted to see you working, too.");
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("H1808000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Well, there are other reasons, as\nwell.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1808000_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Anyway, do your best!");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝...\nThank you very much!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Who would have thought that\n｛Masaki＊＊｝ would come\nhere to support us...!\nI must do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
