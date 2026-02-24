section "h46_m3_000"{
    int var0 = 0;
    if (Parameter_GetCh1Param(2, 25) == 1){
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_01F", 0);
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Voice_PlayVoice("H4603000_C00000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The Baseball Club did it.\nIt seems like I'll be able to write\na good report.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, right!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H4603000_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "You were also cheering\nenergetically.\nIt may be thanks to you guys that it\nturned out to be a good game.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            else {
                Voice_PlayVoice("", 3, "H4603000_C00200");
                Message_Who(3);
                Message_MsgDisp("Hikami", "｛主人公｝, they did it!\nIt was a win for Hanegasaki Academy!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, thank gosh!");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C00300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The players were more lively than\nusual.\nI think that the people in the\nstands had a sense of unity, too.");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Isn't that because of you\ncheerleaders?\nYes, it is the power of the\nCheerleading Club.\nYour smile was the brightest.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha, thanks, ｛Hikami＊＊｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Voice_PlayVoice("H4603000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... The Baseball Club lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The other school's cheering was\ngood....\nIt was a game that the Cheerleading\nClub will learn from.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right... It was unfortunate...)");
                }
            else {
                Voice_PlayVoice("H4603000_C00700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... The Baseball Club lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, they did...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "But the people in the stands did not\ngive up cheering until the very end.\nEveryone did well.");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C00900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "This is surely because the\nCheerleading Club lead on the\ncheering.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Maybe...?");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "It is true. Your...\nsmile in particular, was comforting.\nThank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...\nYou are comforting, too...)");
                }
            }
        }
    else {
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(3, "M3_01F", 0);
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Voice_PlayVoice("H4603000_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The Track and Field Club did it!\nThey were way out in front of the\nperson in 2nd place.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H4603000_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "And thanks to you, I have understood\nthe main point of the race.\nThank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            else {
                Voice_PlayVoice("H4603000_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The Track and Field Club won.\nTheir rank was amazing, but they've\nestablished quite a record time.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You're right!");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H4603000_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The Cheerleading Club was also fired\nup.\nIt was great.\nThanks to you, the people in the\nstands also got into it more.");
                Character_ChFace(0, 4, 1);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "If your voices gave the athletes\nenergy, then would it not be fine to\nsay that you cheerleaders were the\nmain stars today?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, really?");
                Character_ChFace(0, 0, 6);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, indeed!\nThank you, you have worked hard.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, it was worth putting my all\ninto cheering!)");
                }
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(3, "M3_01F", 0);
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Voice_PlayVoice("H4603000_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "The Track and Field Club lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4603000_C01800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I still do not know what the main\npoint of this race was...\nDoesn't the cheering need a bit more\nwork?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right... That was unfortunate.)");
                }
            else {
                Voice_PlayVoice("H4603000_C01900", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... That was close.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C02000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "But the people in the stands were\nunified until the very end.\nNo one gave up.");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4603000_C02100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "This is surely thanks to the\nCheerleading Club.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really?");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("H4603000_C02200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, really. Your...\nsmile in particular cheered us up.\nThank you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...\nYou cheer me up, too...)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
