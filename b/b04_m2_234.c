section "b04_m2_234"{
    int var0 = Date_GetDateOption(2, 71);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402234_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It was not the ghosts, but the gross\nsmell of blood that was eerie...");
        Message_MsgSel("It was scary, but I enjoyed being with you!", "I was so scared I shut my eyes...", "It felt like it was just childish tricks!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402234_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right.\nThe building and the creatures were\nreally detailed, which made their\ngazes look even more eerie.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402234_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Well...\nYou definitely wouldn't want to look\nstraight at those things in there.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402234_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... What was?\nI'm concerned over your ability to\nsense things...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402234_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Hey...\nWas there something at that broken\nhospital bed area?");
        Message_MsgSel("You're kidding!? Ack, this is scary～!", "There was a girl with long, black hair...", "Geez! That's not going to work on me.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402234_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It was a joke.\nHaha, that was funny, I thought\nyou'd react like that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402234_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... It was a joke.\nWhat exactly did you see...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402234_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "What, you didn't believe it?\nOr are you just that strong?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402234_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "The echo of those screams...\nTo a certain extent, that also added\nto the fear.");
        Message_MsgSel("I joined in on the screaming too...", "Everyone is so cowardly.", "Why didn't you scream, ｛Shiba＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402234_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Right. Your scream was the loudest.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402234_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's that kind of attraction.\nSurprisingly, you're doing quite\nwell.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(2, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402234_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "You're asking me why...\nBecause there's no need to scream.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402234_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Huh? Because it's not scary.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hmm...");
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0402234_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "? What?\nYou look like you wanna say\nsomething.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So then... How about this?)");
                Message_Who(0);
                Message_MsgDisp("主人公", ".........");
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 7, 0);
                Voice_PlayVoice("B0402234_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "What's wrong?\nYou're looking into the distance.\nIs there something there? ... Hm?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Now!)");
                SoundEffect_PlayStream(2, "SS_DSE_219_000");
                Screen_StartShakePlane(0, 30, 30, 0, 30);
                System_Wait(120);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402234_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Wah!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Hehe, I've heard you scream,\n｛Shiba＊＊｝▼");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402234_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "......... You.");
                Character_BlinkStart(2, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402234_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Haha...\nI'm gonna scare you 100 times in\nreturn before we go home, so be\nready for it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Whoa...\n｛Shiba＊＊｝'s eyes look\nserious...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
