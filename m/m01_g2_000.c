section "m01_g2_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_1", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_1", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_1", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_1", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Argh～. I'm bored...\nI'm bored of just sleeping...)");
    SoundEffect_PlaySE(19, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "Huh? I wonder who it is?");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    Voice_PlayVoice("M0211000_K00000", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Hello? It's Onoda.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, ｛Onoda＊＊｝.\nWhat's up?");
    Voice_PlayVoice("M0211000_K00100", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "I called because I was worried, I\nheard you were sick.\nUmm... are you alright?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, yeah.\nIt seems like I've gotten a lot\nbetter.\nWere you worried?");
    Voice_PlayVoice("M0211000_K00200", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "The most important thing to do when\nyou are not feeling well is to eat\nhealthy.");
    Voice_PlayVoice("M0211000_K00300", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "I heard that Vitamin C is especially\ngood for your body when you are\nfatigued.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Is that so?");
    Voice_PlayVoice("M0211000_K00400", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "Although there is lots of Vitamin C\nin fruits and vegetables, I\nrecommend rose tea.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay. Thanks.");
    Voice_PlayVoice("M0211000_K00500", #1, "");
    Message_Who(11);
    Message_MsgDisp("Onoda", "It would be nice if you recovered\nsoon.\nI will see you later.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, see you later.");
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Thanks to ｛Onoda＊＊｝,\nI'm feeling better.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
