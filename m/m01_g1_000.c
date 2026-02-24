section "m01_g1_000"{
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
    Voice_PlayVoice("M0210000_J00000", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Hello? It's Toudou.");
    Message_Who(0);
    Message_MsgDisp("主人公", "｛Toudou＊＊｝. What's up?");
    Voice_PlayVoice("M0210000_J00100", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "I heard you were sick? Are you okay?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah.\nIt seems like I've gotten a lot\nbetter.\nWere you worried?");
    Voice_PlayVoice("M0210000_J00200", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Not worried...\nI'm just unsatisfied when someone\nwho's usually there isn't there.");
    Voice_PlayVoice("M0210000_J00300", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Get well soon.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, thanks.");
    Voice_PlayVoice("M0210000_J00400", #1, "");
    Message_Who(10);
    Message_MsgDisp("Toudou", "Ah, but don't force yourself.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah!");
    SoundEffect_PlaySE(20, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Thanks to ｛Toudou＊＊｝,\nI'm feeling better.)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
