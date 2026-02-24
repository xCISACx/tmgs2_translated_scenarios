section "i54_m8_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    SoundEffect_PlaySE(21, 127);
    System_Wait(#300);
    SoundEffect_StopSE(21, 0);
    if (Parameter_GetCh1Param(8, 130) <= 3){
        Voice_PlayVoice("I5408000_Q00000", #1, "");
        Message_Who(17);
        Message_MsgDisp("Arisawa", "Yes, this is Anneri.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, Arisawa-san.\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("I5408000_Q00100", #1, "");
        Message_Who(17);
        Message_MsgDisp("Arisawa", "What's wrong?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Voice_PlayVoice("I5408000_Q00200", #1, "");
        Message_Who(17);
        Message_MsgDisp("Arisawa", "I see... It can't be helped.\nIt is unfortunate, though.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes... I am sorry.");
        Voice_PlayVoice("I5408000_Q00300", #1, "");
        Message_Who(17);
        Message_MsgDisp("Arisawa", "I wonder if Masaki-kun will be more\nfrustrated about this than I am.");
        Message_Who(0);
        Message_MsgDisp("主人公", ".........");
        Voice_PlayVoice("I5408000_Q00400", #1, "");
        Message_Who(17);
        Message_MsgDisp("Arisawa", "But you have clearly stated your\nreasons, so I think he will also\nunderstand and accept.");
        Voice_PlayVoice("I5408000_Q00500", #1, "");
        Message_Who(17);
        Message_MsgDisp("Arisawa", "You've worked hard.\nFeel free to come in to have a chat\nat any time.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay. Thank you very much.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(For some reason, I feel annoyed\nwith myself...)");
        }
    else {
        Voice_PlayVoice("I5408000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yes, this is Anneri.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
        Voice_PlayVoice("I5408000_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh, what's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "U-Umm...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Voice_PlayVoice("I5408000_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... I see.\nIt can't be helped, then...");
        Message_Who(0);
        Message_MsgDisp("主人公", "...... Sorry...");
        Voice_PlayVoice("I5408000_H00900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Do you have to quit?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes... I've thought about it a lot.");
        Voice_PlayVoice("I5408000_H01000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Okay, I get it!");
        Voice_PlayVoice("I5408000_H01100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Well, even if you're quitting, it's\nnot like this is the end.");
        Voice_PlayVoice("I5408000_H01200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Come in for a chat whenever you\nwant.\nIf I'm free, I'll hang out with you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay. I will do that.");
        Voice_PlayVoice("I5408000_H01300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You've worked hard.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks for... everything.");
        Voice_PlayVoice("I5408000_H01400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Yeah. Later.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Masaki-senpai's voice sounded\ndepressed...\nI wonder if it was the wrong thing\nto do...)");
        }
    Message_CloseMsg();
    Parameter_InPl1Param(26, 0);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
