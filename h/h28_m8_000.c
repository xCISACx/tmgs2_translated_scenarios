section "h28_m8_000"{
    if (Parameter_GetCh1Param(8, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("H2808000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yo. How you feeling?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh...? ｛Masaki＊＊｝!\nDid you come here to support us?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("H2808000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "There's no way I'd miss you on the\ngrand stage, right?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you very much!");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("H2808000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "...\nI'll be in the stands, but I'll be\nrunning right beside you in spirit.");
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H2808000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Do your best so there's no regret!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thanks to ｛Masaki＊＊｝, my\nnervousness is gone!\nAlright, I'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
