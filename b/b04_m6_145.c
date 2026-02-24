section "b04_m6_145"{
    int var0 = Date_GetDateOption(2, 40);
    Background_Bg_GS2("BG_NE260_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_NE_240_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F00000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess.\nI didn't get bored looking at their\nvibrant clothes.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F00100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, yeah.\nMaybe it's due to their loud\nclothes?\nI didn't get bored looking at it.");
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
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F00200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, their songs were quite common,\nbut the way they presented it with\ntheir clothes was good.\nI enjoyed it.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F00300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Well, the songs were one thing, but\nsince they presented it well with\ntheir get-ups.\nI guess it's okay, right?");
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
            Character_ChFace(0, 0, 9);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406145_F00400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really?\nIndeed, their songs were one thing,\nbut for me, it was more or less of\nan enjoyment.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406145_F00500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Their clothes were flashy.\nI like the look of them....\nSenpai's comment is a bit harsh.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406145_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Still, those people had an amazing\nappearance.");
            }
        else {
            Voice_PlayVoice("B0406145_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That band has some awesome get-ups.\nThey wore loud colors and their hair\nwas spikey, too.");
            }
        Message_MsgSel("It looks like it's difficult to sing.", "That's Visual-kei.", "It kinda suits you, ｛Amachi＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(6, 3, (#1), 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Voice_PlayVoice("B0406145_F00800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "How did it make it difficult for\nthem to sing?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Voice_PlayVoice("B0406145_F00900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "But, Visual-kei would be meaningless\nif they stopped doing that, right?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F01000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, I did think of that.\nThat song and that get-up, it'd be\nno good if they lacked those.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F01100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess.\nThose outfits and songs in one are a\nperfect combination.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F01200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Actually...\nI did think of trying it a little.");
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
                Voice_PlayVoice("B0406145_F01300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Really? I think so, too!\nI wish I could wear it at least\nonce.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(6, 130) <= 2){
            Voice_PlayVoice("B0406145_F01400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The song's lyrics, \"The tears of an\nangel, the smile of a devil\", were\nawesome lyrics.");
            }
        else {
            Voice_PlayVoice("B0406145_F01500", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The song's lyrics, \"The tears of an\nangel, the smile of a devil\", were\nawesome lyrics.");
            }
        Message_MsgSel("Judging from its title it's amazing.", "In the end, it's just a fantasy.", "I feel like you're similar to it...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F01600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I guess so.\nI wonder how they got their ideas\nwith those kind of tastes...");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 11);
                Character_BlinkStart(6, 2, (#1), 2);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F01700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, that sense is amazing.\nI could never manage to do anything\nlike that.");
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
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F01800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it's so easy to understand the\nimages flowing through my mind.\nThat kind of feeling is so great.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
                Character_ChFace(1, 0, 10);
                Message_PauseSkinship();
                Voice_PlayVoice("B0406145_F01900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "To have written lyrics like that,\nthat can easily be understood, it's\nso great and creative.");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
                Message_SkinshipSet(0);
                }
            break ;
            case 2:
            if (Parameter_GetCh1Param(6, 130) <= 2){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1), 1);
                Voice_PlayVoice("B0406145_F02000", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Lyrics about a person who has two\nfaces, looking at the past, right?\n...\nSo, is that why you stare at me all\nthe time?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else if (Parameter_GetCh1Param(6, 130) == 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(6, 3, (#1));
                Voice_PlayVoice("B0406145_F02100", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Lyrics about a person who has two\nfaces who looks at the past...\nWell, what?\nIf you've got something to say, say\nit.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0406145_F02200", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Hey, Senpai...\nWhen you say you feel like I'm just\nlike that...\nDoes your heart quiver?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0406145_F02300", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Mine does.\nI guess it's because the lyrics were\nlike that?");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406145_F02400", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "\"You, the devil, sneering, but with\nconfused eyes filled with tears...\"");
                Voice_PlayVoice("B0406145_F02500", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "\"The balance of the heart wavering\nwhile temptation sways the two of\nyou.\"");
                Message_Who(0);
                Message_MsgDisp("主人公", "I-It went like that?");
                Character_BlinkStart(6, 2, (#1));
                Voice_PlayVoice("B0406145_F02600", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "Yeah, it was like that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I never listened to it that much...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406145_F02700", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Probably.");
                Character_BlinkStart(6, 0, (#1));
                Character_ChFace(0, 2, 5);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0406145_F02800", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "... Senpai.\nIf Senpai wishes, I'd go back to my\nold self, to the one you first met.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(6, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0406145_F02900", #1, "");
                Message_Who(6);
                Message_MsgDisp("Amachi", "I don't really like it, though.\nBut if it makes Senpai smile, I'd...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Amachi＊＊｝...?)");
                }
            break ;
            }
        }
    }
