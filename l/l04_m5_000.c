section "l04_m5_000"{
    int var0;
    int var1;
    int var2 = 0;
    if (Parameter_GetCh1Param(5, 130) <= 2){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
        Voice_PlayVoice("", 5, "L0405000_E00000");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝. Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello! Today's Valentine's Day!\nHere, it's chocolate.");
        }
    else if (Parameter_GetCh1Param(5, 130) == 3){
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
        Voice_PlayVoice("", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "｛主人公｝!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Wah, you scared me.\nI was just looking for you,\n｛Chris＊＊｝.");
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("L0405000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really? I'm so happy～. What is it?\nWhat's up?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Here! It's Valentine's chocolate.");
        }
    else {
        Background_Bg_GS2("BG_SC410_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Chris＊＊｝!");
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(5, "M5_01F", 0);
        Music_PlayBGM(0, "MN_C_05_000_D00", 127, 40);
        Voice_PlayVoice("L0405000_E00200", 5, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Ah.\n｛主人公｝.............");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh. What's wrong?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(5, 2, (#1));
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("L0405000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Eh? N-Nothing.\nI was wondering why you were looking\nfor me...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh.\nI was going to give you Valentine's\nChocolate!");
        }
    if (Parameter_GetCh1Param(5, 130) >= 2){
        if (Parameter_GetPl1Param(36) == 1){
            var0 = Parameter_GetPl1Param(36);
            if (Parameter_ChkChar(5, 3)){
                if (Parameter_GetCh1Param(5, 130) <= 2){
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0405000_E00400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I'm so lucky to be getting heaps of\nchocolate from cute girls.");
                    Voice_PlayVoice("L0405000_E00500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Anyway, he looked happy.)");
                    Parameter_AddCh1Param(5, 61, 0);
                    Parameter_AddCh1Param(5, 60, 3);
                    Parameter_AddCh1Param(5, 62, #1);
                    }
                else if (Parameter_GetCh1Param(5, 130) == 3){
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0405000_E00600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Is this the much talked about grand\nfinale chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh... it's obligatory chocolate.");
                    Character_ChFace(0, 2, 4);
                    Character_BlinkStart(5, 3, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0405000_E00700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Ah, that. I'm always in your care.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0405000_E00800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Isn't that what 'obligatory' means?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It's a little different...");
                    Character_ChFace(0, 0, 3);
                    Voice_PlayVoice("L0405000_E00900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Well I really am in your care, so\nit's fine.");
                    Character_ChFace(0, 2, 5);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0405000_E01000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Anyway, he's happy... I think?)");
                    Parameter_AddCh1Param(5, 61, 0);
                    Parameter_AddCh1Param(5, 60, 6);
                    Parameter_AddCh1Param(5, 62, 0);
                    }
                else {
                    Character_ChFace(0, 4, 0);
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0405000_E01100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", ".........");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "｛Chris＊＊｝?");
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("L0405000_E01200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I... misunderstood how to live...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh!?");
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("L0405000_E01300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Is this... addressed to me?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah.");
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(5, 3, (#1));
                    Voice_PlayVoice("L0405000_E01400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "...\nThis obligatory chocolate is\namazing...");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(｛Chris＊＊｝...\nHe looks a little down...?)");
                    Parameter_AddCh1Param(5, 61, #1);
                    Parameter_AddCh1Param(5, 60, 0);
                    Parameter_AddCh1Param(5, 62, 10);
                    }
                Parameter_InCh1Param(5, 555, 5);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(37) == 1){
            var0 = Parameter_GetPl1Param(37);
            if (Parameter_ChkChar(5, 3)){
                if (Parameter_GetCh1Param(5, 130) <= 2){
                    Character_BlinkStart(5, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0405000_E01500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "This looks yummy. Thanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's how it is.)");
                    Parameter_AddCh1Param(5, 61, 3);
                    Parameter_AddCh1Param(5, 60, 3);
                    Parameter_AddCh1Param(5, 62, #1);
                    }
                else if (Parameter_GetCh1Param(5, 130) == 3){
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("L0405000_E01600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Is this for me?\nIs it okay for me to take something\nso expensive looking?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Of course!");
                    Character_ChFace(0, 0, 10);
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("L0405000_E01700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Thanks. Look forward to next month.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Yeah, he looked happy.)");
                    Parameter_AddCh1Param(5, 61, 3);
                    Parameter_AddCh1Param(5, 60, 10);
                    Parameter_AddCh1Param(5, 62, #1);
                    }
                else {
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("L0405000_E01800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... For real?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Hm?");
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0405000_E01900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It looks yummy, and it's splendid...\nIs it okay for me to take it?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Of course!\nI bought it because I wanted you to\nhave it, ｛Chris＊＊｝.");
                    Character_ChFace(0, 0, 6);
                    Voice_PlayVoice("L0405000_E02000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I'll eat it when I get home...");
                    Character_ChFace(0, 2, 2);
                    Character_BlinkStart(5, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0405000_E02100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "......... I'm happy.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh, he looked happy!)");
                    Parameter_AddCh1Param(5, 61, 6);
                    Parameter_AddCh1Param(5, 60, 10);
                    Parameter_AddCh1Param(5, 62, #1);
                    }
                Parameter_InCh1Param(5, 555, 4);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 1){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(5, 3)){
                if (Parameter_GetCh1Param(5, 130) <= 2){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("L0405000_E02200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "This chocolate is so elaborate.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It's handmade. Can you accept it?");
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0405000_E02300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I see, thanks. I'll savor it.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's how it is.)");
                    Parameter_AddCh1Param(5, 61, 3);
                    Parameter_AddCh1Param(5, 60, 6);
                    Parameter_AddCh1Param(5, 62, #3);
                    }
                else if (Parameter_GetCh1Param(5, 130) == 3){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("L0405000_E02400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Ehh～, did you make this?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah.");
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0405000_E02500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "You made it well...... I'm touched.\nMy name's also on it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Haha, thanks.");
                    Character_ChFace(0, 2, 3);
                    Character_BlinkStart(5, 3, (#1));
                    Voice_PlayVoice("L0405000_E02600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Me too, thanks. I'll eat it.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(He looked happy. Thank gosh!)");
                    Parameter_AddCh1Param(5, 61, 6);
                    Parameter_AddCh1Param(5, 60, 10);
                    Parameter_AddCh1Param(5, 62, #3);
                    }
                else {
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0405000_E02700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "This...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh, what?");
                    Voice_PlayVoice("L0405000_E02800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "It looks handmade, but...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah. I did my best.");
                    Character_ChFace(0, 0, 10);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0405000_E02900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... I'm touched...\nIt's a waste to eat it...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Then I'll seize it.");
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("L0405000_E03100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "T-That's unacceptable!\nSorry, I'll eat it.\nSince it's ceased.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "It's not 'ceased', but 'seized'...");
                    Character_ChFace(0, 2, 3);
                    Character_BlinkStart(5, 3, (#1));
                    Character_ChFace(0, 3, 5);
                    Voice_PlayVoice("L0405000_E03200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yeah, that. I really am happy.\nI wonder how I should eat it～.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh.\nHe looked extremely happy!)");
                    Parameter_AddCh1Param(5, 61, 10);
                    Parameter_AddCh1Param(5, 60, 10);
                    Parameter_AddCh1Param(5, 62, #3);
                    }
                Parameter_InCh1Param(5, 555, 1);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 2){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(5, 3)){
                if (Parameter_GetCh1Param(5, 130) <= 2){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("L0405000_E03300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Ah, it's handmade.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, eat it.");
                    Character_ChFace(0, 2, 0);
                    Character_BlinkStart(5, 3, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0405000_E03400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Girls make good handmade things.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_BlinkStart(5, 0, (#1));
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0405000_E03500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yeah, even this edge that's jutting\nout is cute.");
                    Character_BlinkStart(5, 3, (#1));
                    Voice_PlayVoice("L0405000_E03600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Thanks, I'll eat it later.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Well, that's that.)");
                    Parameter_AddCh1Param(5, 61, 3);
                    Parameter_AddCh1Param(5, 60, 3);
                    Parameter_AddCh1Param(5, 62, #1);
                    }
                else if (Parameter_GetCh1Param(5, 130) == 3){
                    Character_ChFace(0, 2, 3);
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("L0405000_E03700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Did you make this?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, I did.");
                    Character_BlinkStart(5, 2, (#1));
                    Character_ChFace(0, 3, 0);
                    Voice_PlayVoice("L0405000_E03800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Ehh～, it's good.\nI'll pretend that I didn't see you\nscribbling my name in it.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "...\nI'd be glad if you would do that and\ntake it.");
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("L0405000_E03900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Haha, I'm kidding.\nJust getting one makes me glad.\nThanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Thank gosh.\nHe looked relatively happy.)");
                    Parameter_AddCh1Param(5, 61, 3);
                    Parameter_AddCh1Param(5, 60, 3);
                    Parameter_AddCh1Param(5, 62, #3);
                    }
                else {
                    Character_ChFace(0, 0, 10);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0405000_E04000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Ah, handmade!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, you can tell?");
                    Character_BlinkStart(5, 3, (#1));
                    Voice_PlayVoice("L0405000_E04100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Yeah?\nThe deco-chan and box-chan are\nreally nice.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Deco-chan, box-chan...");
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("L0405000_E04200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "I can feel the love...\nI feel happy just looking at it.\nThanks.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Anyway, he looked happy.\nThank gosh!)");
                    Parameter_AddCh1Param(5, 61, 3);
                    Parameter_AddCh1Param(5, 60, 6);
                    Parameter_AddCh1Param(5, 62, #3);
                    }
                Parameter_InCh1Param(5, 555, 2);
                }
            else {
                var1 = 1;
                }
            }
        else if (Parameter_GetPl1Param(39) == 3){
            var0 = Parameter_GetPl1Param(39);
            if (Parameter_ChkChar(5, 3)){
                if (Parameter_GetCh1Param(5, 130) <= 2){
                    Character_ChFace(0, 2, 0);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("L0405000_E04300", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... It's handmade.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, I'd like for you to take it,\n｛Chris＊＊｝.");
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0405000_E04400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... This isn't chocolate. It's art.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_ChFace(0, 3, 4);
                    Voice_PlayVoice("L0405000_E04500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... It has a real amazing aura.\nI can feel it...!");
                    Character_ChFace(0, 0, 0);
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("L0405000_E04600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "We gotta preserve the shape...\nI'll take a picture of it～!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Hmm. He's happy, I think...?)");
                    Parameter_AddCh1Param(5, 61, #1);
                    Parameter_AddCh1Param(5, 60, 0);
                    Parameter_AddCh1Param(5, 62, 3);
                    }
                else if (Parameter_GetCh1Param(5, 130) == 3){
                    Character_ChFace(0, 2, 2);
                    Character_ChFace(0, 3, 1);
                    Voice_PlayVoice("L0405000_E04700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Is this chocolate?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah... It is, why?");
                    Character_ChFace(0, 2, 1);
                    Character_BlinkStart(5, 3, (#1));
                    Character_ChFace(0, 3, 2);
                    Voice_PlayVoice("L0405000_E04800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... Hmm, it smells okay...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "............");
                    Character_BlinkStart(5, 0, (#1));
                    Character_ChFace(0, 2, 0);
                    Voice_PlayVoice("L0405000_E04900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "What does it taste like?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    Character_ChFace(0, 0, 11);
                    Voice_PlayVoice("L0405000_E05000", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Ah!");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "!?");
                    Character_ChFace(0, 0, 10);
                    Voice_PlayVoice("L0405000_E05200", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "This is a \"guess the taste\" game.\nCan I give the answer to the game\nnext month?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh!?");
                    Character_BlinkStart(5, 3, (#1));
                    Voice_PlayVoice("L0405000_E05400", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Wow, I'm really looking forward to\nit.\nI'll give some to my mommy and\ndaddy.\nI'll see you later.");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh...\nI might not have communicated my\nfeelings...)");
                    Parameter_AddCh1Param(5, 61, 3);
                    Parameter_AddCh1Param(5, 60, 3);
                    Parameter_AddCh1Param(5, 62, #1);
                    }
                else {
                    Character_ChFace(0, 0, 9);
                    Voice_PlayVoice("L0405000_E05500", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... Is this handmade?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Yeah, why?");
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("L0405000_E05600", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... It's chocolate, right?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah...");
                    Character_BlinkStart(5, 3, (#1));
                    Voice_PlayVoice("L0405000_E05700", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... You didn't taste it, did you?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Y-Yeah.\nI mean, there's nothing else in it\nexcept chocolate...");
                    Character_BlinkStart(5, 2, (#1));
                    Voice_PlayVoice("L0405000_E05800", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "...\nIt doesn't look that way, though...");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Eh?");
                    Character_BlinkStart(5, 0, (#1));
                    Character_ChFace(0, 2, 1);
                    Character_ChFace(0, 3, 5);
                    Character_ChFace(0, 4, 1);
                    Voice_PlayVoice("L0405000_E05900", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Anyway, I've decided.\nI'll fill my stomach with the\nchocolate I got from you, no matter\nwhat happens to me.");
                    Character_BlinkStart(5, 2, (#1));
                    Character_ChFace(0, 3, 3);
                    Voice_PlayVoice("", 5, "L0405000_E06001");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "... ｛主人公｝.\nI won't forget today.");
                    Character_ChFace(0, 2, 2);
                    Voice_PlayVoice("L0405000_E06100", #1, "");
                    Message_Who(5);
                    Message_MsgDisp("Chris", "Thanks... thanks!");
                    Music_StopBGM(0, 40);
                    Character_Chara_GS2(5, "NON");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "(Ugh... I wonder if he's happy?)");
                    Parameter_AddCh1Param(5, 61, 3);
                    Parameter_AddCh1Param(5, 60, 3);
                    Parameter_AddCh1Param(5, 62, #3);
                    }
                Parameter_InCh1Param(5, 555, 3);
                }
            else {
                var1 = 1;
                }
            }
        }
    else if (Parameter_GetCh1Param(5, 130) < 2){
        if (Parameter_GetPl1Param(36) == 1){
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("L0405000_E00400", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "I'm so lucky to be getting so much\nchocolate from cute girls.");
            Voice_PlayVoice("L0405000_E00500", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Thanks.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Anyway, he looked happy.)");
            Parameter_AddCh1Param(5, 61, 0);
            Parameter_AddCh1Param(5, 60, 3);
            Parameter_AddCh1Param(5, 62, #1);
            Parameter_InCh1Param(5, 555, 5);
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("L0405000_E06200", #1, "");
            Message_Who(5);
            Message_MsgDisp("Chris", "Uhh... I can't take any more today.\nSorry.");
            Music_StopBGM(0, 40);
            Character_Chara_GS2(5, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He couldn't take it...)");
            var2 = System_GlobalWork(23, 1);
            if (var2 == #1){
                var2 = 0;
                }
            if (Parameter_ExtChar(0, 6, 2, 1, var2) == 0){
                if (Parameter_ExtChar(0, 6, 1, 0) == 5){
                    var1 = 1;
                    }
                else if (Parameter_ExtChar(0, 6, 1, 0) == 0){
                    if (Parameter_ExtChar(0, 6, 0, 0) == 5){
                        var1 = 1;
                        }
                    }
                }
            if (var1 == 1){
                Character_Chara_GS2(5, "NON");
                switch (var2){
                    case 1:
                    System_Call_GS2("F99", "M1", 0);
                    break ;
                    case 2:
                    System_Call_GS2("F99", "M2", 0);
                    break ;
                    case 3:
                    System_Call_GS2("F99", "M3", 0);
                    break ;
                    case 4:
                    System_Call_GS2("F99", "M4", 0);
                    break ;
                    case 6:
                    System_Call_GS2("F99", "M6", 0);
                    break ;
                    case 7:
                    System_Call_GS2("F99", "M7", 0);
                    break ;
                    }
                }
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 86, 1);
    }
