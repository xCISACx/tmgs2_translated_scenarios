section "b04_m3_147"{
    int var0 = Date_GetDateOption(2, 42);
    Background_Bg_GS2("BG_NE280_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_30_P63_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403147_C00000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, it was quite a good\nperformance.\nIt is nice, I can calm down by\nlistening to jazz music at a\nChristmas live.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403147_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see. I was able to enjoy myself.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0403147_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Really...?\nI thought that it was not a bad\nperformance, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403147_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "How mysterious...\nEven though I do not usually listen\nto music, that performance made an\nimpression.");
        Message_MsgSel("Perhaps it's the magic of Christmas?", "Those performers are skilled.", "Because I was beside you▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403147_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I was a little taken aback by that\nromantic expression, but...\nThat certainly may be so.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403147_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIt was definitely good, but I think\nthat something that would capture my\nheart would be something better than\nthat.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0403147_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nAnd from what did you derive that\nconclusion from?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403147_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThere was interaction between the\npiano and the saxophones, right?\nThat was splendid.");
        Message_MsgSel("As expected of professionals!", "That was improvised!", "Just like you and me, ｛Hikami＊＊｝▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403147_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes...\nRather than being called\nprofessionals, as musicians, they\nwere wonderful.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403147_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, right!\nSince there is no musical score,\nthey cannot perform the same thing\nagain.\nWe listened to something amazing.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403147_C01000", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nWho is the piano and who is the\nsaxophone?\nI cannot imagine that at all.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403147_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "......... You and me?\nWhy did you think that?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm...\nIt was like two instruments talking\nto each other.");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403147_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... I see, talking, huh.\nThat is a perfectly fitting phrase.");
                Voice_PlayVoice("B0403147_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "When I speak, you reply.\nWhen you speak to me, I also respond\nto that...");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Yeah!");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403147_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah... we are similar.\nWe are the exact same in that we are\nalso not following a musical score.");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403147_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Just like that performance...\nBut according to the flow, I cannot\ntalk to you...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm... Is that so?");
                Character_BlinkStart(3, 3, (#1));
                Voice_PlayVoice("B0403147_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nEven seeing us now, when I talk to\nyou, I...\nam considerably nervous.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, is that so?");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 2, 5);
                Voice_PlayVoice("B0403147_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Because you are good at listening.\nIf we could always...\nBe able to talk like the way we do\nnow, it would be nice.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(What's gotten into\n｛Hikami＊＊｝, for him to go\nbright red like that...?)");
                }
            break ;
            }
        }
    }
