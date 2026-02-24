section "b04_m6_234"{
    int var0 = Date_GetDateOption(2, 71);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406234_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... H-How was it?");
            }
        else {
            Voice_PlayVoice("B0406234_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... H-How was it?");
            }
        Character_ChFace(0, 7, 0);
        Message_MsgSel("It was scary, but I enjoyed being with you!", "I was so scared I shut my eyes...", "It felt like it was just childish tricks!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 3, 0);
                Character_ChFace(1, 4, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406234_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ha-ha... Thank you.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 3, (#1), 2);
                Character_ChFace(1, 3, 5);
                Character_ChFace(1, 4, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406234_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Ah, s-so? Is that right?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406234_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? You did!?\nSo, let's leave this place soon!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406234_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? You did!?\nWe should stop coming to places like\nthis!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406234_F00600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "What!? ... I-Is that so?\nHa-hahaha....");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406234_F00700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "T-That's a childish trick!?\nThen why am I so afraid!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406234_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "W-What is that!? That's a monster!");
            }
        else {
            Voice_PlayVoice("B0406234_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "W-What is that? That's a monster!");
            }
        Character_ChFace(0, 7, 0);
        Message_MsgSel("Not a monster, it's a creature!", "It was nicely done.", "It was very scary!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406234_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I don't need to know that!\nI wanted to say there was no such\nthing...!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406234_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-I don't need to know things like\nthat!\nStupid Senpai!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1), 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406234_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "D-Do you have to be so composed?\nYou're something else. Ahaha...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406234_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\n*Sigh* You have so much composure...\nYou're something else, Senpai...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 2);
                Character_BlinkStart(6, 2, (#1), 2);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406234_F01400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I-Is that right!?\nWe'll go to the next place, next!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 0);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406234_F01500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Y-Yeah, you're right!\nLet's go already!\nTo a bright and pleasant place!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Character_BlinkStart(6, 3, (#1));
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406234_F01600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I-It's finally over... Umm...\nwhy did you intend on taking me\nthere?");
            }
        else {
            Voice_PlayVoice("B0406234_F01700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "I-It's finally over...\nOh umm, why did you try taking me\nthere!?");
            }
        Message_MsgSel("Because it'd be boring to go see it alone.", "Because I am happy if ｛Amachi＊＊｝ is too.", "I'm sorry, I'll see it alone next time.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0406234_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "P-Please do not wind up bringing me\never again!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Character_BlinkStart(6, 0, (#1), 1);
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406234_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Do not wind up bringing me ever\nagain!\n... It's scary!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406234_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Is it so interesting to see m-me so\nafraid!?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406234_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "You like seeing me so afraid!?\nI will never come again!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 8);
                Voice_PlayVoice("B0406234_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nSenpai, do you know why I really\ndislike places like this?");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406234_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Saying that it's fun...\nI'm not coming to the amusement park\nwith you anymore!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Umm, ｛Amachi＊＊｝...");
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406234_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "...\nIs something that I would have said.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406234_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I'm weak when it comes to Senpai.\nI was invited to come.... I think.");
                Character_ChFace(0, 0, 9);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0406234_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "No one but me. By mean Senpai....\nHonestly, it was mean.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...｛Amachi＊＊｝?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406234_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Absolutely! P-Please!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_BlinkStart(6, 0, (#1), 2);
                Character_ChFace(1, 2, 5);
                Character_ChFace(1, 3, 1);
                Character_ChFace(1, 4, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406234_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Absolutely! It's a deal!");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
