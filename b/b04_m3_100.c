section "b04_m3_100"{
    int var0 = Date_GetDateOption(2, 30);
    if (var0 == 0){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0403100_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Shoelaces, check. Gloves, check....\nNow, all that is left to confirm is\nyour ability.");
        Message_MsgSel("If it's skating, leave it to me!", "I'm alright at it.", "I'd like for you to teach me how to skate.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetPl1Param(19) >= 40){
                Date_InData_Date(124, 3);
                Date_InData_Date(321, 1);
                Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(3, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Message_PauseSkinship();
                Voice_PlayVoice("B0403100_C00100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I will rely on you.\nIt does not seem like I have to be\nworried about saving you if you fall\nover.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Character_ChFace(1, 2, 0);
                Character_BlinkStart(3, 3, (#1), 2);
                Character_ChFace(1, 3, 3);
                Voice_PlayVoice("B0403100_C00200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nIf you talk yourself up, you will be\nchoking on your own words later.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403100_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am probably the same as you.\nLet us have fun and skate leisurely,\nwithout having a competition.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("B0403100_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I am sorry, but I am not so good at\nskating as to be able to teach\nyou....\nI am worried about what will happen,\nnow.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0403100_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "There are people who are spinning\nover there....\nThey must be figure skaters, right?");
        Message_MsgSel("Amazing, just like a compass!", "Watching them makes me dizzy...", "Let's compete, ｛Hikami＊＊｝!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 3, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403100_C00600", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Yes, their pivoting leg isn't shaky\nat all.\nSo there are people good at skating\neven at this skating rink.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403100_C00700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nThen would you not be fine if you\njust averted your eyes?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0403100_C00800", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I hate competing in sports.\nMy stance on it is to just enjoy it\nas a form of leisure.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_FP510_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Voice_PlayVoice("B0403100_C00900", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I am tired...\nIt is understandable since we skated\nquite a lot today.");
        Message_MsgSel("Let's take a little break.", "You mean you fell over quite a lot today.", "You don't have enough willpower!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403100_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, let us do that....\nI will buy you a warm drink.\nPlease take off your shoes and wait\nfor me to return.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(3, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403100_C01100", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "......... My bad.\nLet me rephrase it then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0403100_C01200", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh...?\nYou are quite fussy about the little\nthings.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Haha...\nIt's because you fell down quite a\nlot on your backside,\n｛Hikami＊＊｝...");
                Character_ChFace(0, 0, 6);
                Character_BlinkStart(3, 2, (#1));
                Voice_PlayVoice("B0403100_C01300", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "... Right, I did fall over.\nI acknowledge that. But...");
                Message_Who(0);
                Message_MsgDisp("主人公", "But?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(3, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403100_C01400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "About half of the time, I was caught\nup when you fell over.\nWasn't it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh......");
                Character_BlinkStart(3, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0403100_C01500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "I have acknowledged it....\nWhat about you?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I fell over too...!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0403100_C01600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Alright, then....\nNow, let us take a break.\nI will buy you a warm drink.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(So ｛Hikami＊＊｝ hates\nlosing in this sort of thing,\ntoo...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(3, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0403100_C01700", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "...\nSo were you skating not with\nphysical strength, but with\nwillpower?\nI respect you, then.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
