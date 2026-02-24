section "b04_m3_073"{
    int var0 = Date_GetDateOption(2, 19);
    Effect_OpenParticle(0);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403073_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nThe wind is blowing and the petals\nare fluttering like this.\nIt literally is a cherry blossom\nblizzard.");
        Message_MsgSel("Wah, it's very magical.", "It's sad that they don't last long.", "Let's remember to take our garbage with us.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("B0403073_C00100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ack... A petal blew into my mouth...\nWe had better not open our mouths.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403073_C00200", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nIsn't it enjoyable because of that?\nIf the cherry blossoms were always\nin bloom, we would not be\nappreciative of it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403073_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "You are right!\nI want to say this in loudly.\n\"Make the place more beautiful than\nwhen you arrived\"!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403073_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The flowers on all branches blooming\nin tight bunches....\nThis is an impressive sight.");
        Message_MsgSel("We can't even see the sky.", "Each section only has 3 or 4 flowers.", "The hairy caterpillars will do the same.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403073_C00500", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... We are right under the branches.\nBut the contrast with the sky would\nbe a sight.\nShall we walk near the aisle?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403073_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Right, the Yoshino cherry tree\nactually has little flowers.\nBut because each flower is large, it\nis beautiful.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0403073_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "... Do not say such nasty things.\nHow about you just enjoy the beauty\nof the flowers instead?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_FP230_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0403073_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "The hasty cherry blossoms are\nstarting to lose their petals....\nThis is the most beautiful period.");
        Message_MsgSel("The ground is like a cherry blossom rug.", "I want to go on a cherry blossom trip.", "You're surrounded by beauty.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403073_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes...\nIt is is easily to slip on places\nwhere the petals have accumulated,\nso you had better watch out.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403073_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "That starts at the end of March, and\ncontinues through to mid-May.\nIf you could actually do it, it\nwould be a long trip.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403073_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIn other words, you are like the\nflowers.\nYou will not lose to the Yoshino\ncherry.\nIs that what you are saying?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 6);
                Voice_PlayVoice("B0403073_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I...\nIsn't the way of using that\nexpression a little different?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh, really...?");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0403073_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Y-Yes.\nYou use that expression when you are\nmonopolizing two things of value.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay...");
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403073_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I...\nam not the kind of person who could\nmonopolize the cherry blossoms.\nIt is something that belongs to\neveryone.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... I see. Ah, I misunderstood...");
                Character_ChFace(0, 0, 10);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403073_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Well, there is one more thing that I\ncertainly could monopolize...");
                Message_Who(0);
                Message_MsgDisp("主人公", "One more thing? ...\nThe cherry blossoms on the other\nside belong to the public too,\nright?");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403073_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh!?\nYou were talking about the cherry\nblossoms on both sides...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.\nWhat did you think I was talking\nabout, ｛Hikami＊＊｝?");
                Character_BlinkStart(3, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0403073_C01700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "That's......... No, I cannot say it!\n... Right, the cherry blossoms.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hikami＊＊｝...?)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
