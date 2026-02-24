section "p74_m1_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, I somehow managed to\nsucceed.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8401000_A00000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Well done.\nYou were like a real model, you\nknow?\nYou were great!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I tripped....)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8401000_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, don't mind it that much.\nEveryone will forget about it in no\ntime, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... A real big mistake...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, I somehow managed to\nsucceed.)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!");
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P8401000_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You were great.\nThat was really grand.\nCongratulations.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Saeki＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I tripped...\nThe dress got ruined...)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P8401000_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Don't feel so blue.\nYou got quite a good reputation for\nthe way you dressed.\nSeriously.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(*Sigh*... A real big mistake...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(The show was a great success!\nThe results of these past three\nyears have really grown.\nIt was really good...)");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Saeki＊＊｝!\nWhat's up?");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8401000_A00400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah, umm... You were beautiful.\nThe best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you!");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("P8401000_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, is it possible you'll be\nwearing that, again?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Again?");
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(1, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8401000_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "For instance, like...\nWhen I want you to wear it and\nstuff...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I can.\nBut it's a bit troublesome...");
            Character_ChFace(0, 0, 10);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8401000_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "I see... Well, just an example.\nYeah... Right.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝...)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued in the\nHandicraft Club for three years, it\nwas really good!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I tripped...\nIt was my last performance...)");
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(1, "M1_01F", 0);
            Voice_PlayVoice("", 1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Saeki＊＊｝...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 2, (#1));
            Voice_PlayVoice("P8401000_A00800", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Hey, I'm... sorry.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Why?");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(1, 3, (#1));
            Voice_PlayVoice("P8401000_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Because I said stupid things right\nbefore the show...\nIt wasn't my intention to do so.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It's okay, it's not your fault\nanyway, ｛Saeki＊＊｝.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8401000_A01000", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "But...\nBut, you know, you were the most\nbeautiful.\nI can guarantee that.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8401000_A01100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "So, cheer up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Saeki＊＊｝'s trying to\ncomfort me.)");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued in the\nHandicraft Club for three years, it\nwas really good...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 86, 1);
    }
