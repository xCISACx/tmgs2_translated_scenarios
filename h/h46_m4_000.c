section "h46_m4_000"{
    int var0 = 0;
    if (Parameter_GetCh1Param(2, 25) == 1){
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_01F", 0);
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Voice_PlayVoice("H4604000_D00000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "They won!\nThey're not inferior to me at all.\nThat was a good game!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I'm really glad...!\nThanks, ｛Hariya＊＊｝.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was worth putting my all into\ncheering...!)");
                }
            else {
                Voice_PlayVoice("H4604000_D00100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "They won!\nThose guys are really happy...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I'm really glad...!");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H4604000_D00200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... I'm kinda... annoyed.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4604000_D00300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... That's no fair...\nAh, it's nothing!\nForget what I said!");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4604000_D00400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Anyway! Do your best next time too!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I will!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was worth putting my all into\ncheering...!)");
                }
            }
        else {
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(4, "M4_01F", 0);
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Voice_PlayVoice("H4604000_D00500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "They lost...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... it's unfortunate...");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("H4604000_D00600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Both clubs still need more practice.\nYou guys aren't fired up enough.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh...\nI will try harder next time!)");
                }
            else {
                Voice_PlayVoice("H4604000_D00700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah... it's unfortunate...");
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4604000_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nThey heard your voice on the field.\nSo don't be so depressed.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Right...\nI will try harder next time!)");
                }
            }
        }
    else {
        var0 = Parameter_Rensyu_aft();
        if (var0 < 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(4, "M4_01F", 0);
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Voice_PlayVoice("H4604000_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "They won!\nIt was worth cheering for them!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I'm really glad!\nThanks for cheering too,\n｛Hariya＊＊｝!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was worth putting my all into\ncheering...!)");
                }
            else {
                Voice_PlayVoice("H4604000_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "They won!\nYou guys were really fired up and\ncheered really well!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Thanks...!");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("H4604000_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It looked fun.\nIf people cheered for me like that,\nI'd probably become more fired up.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("H4604000_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Next time, if I've got something on,\nyou should also cheer for me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I will!");
                Character_ChFace(0, 4, 0);
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("H4604000_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Uh... I leave it to you then...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It was worth putting my all into\ncheering...!)");
                }
            }
        else {
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(4, "M4_01F", 0);
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Voice_PlayVoice("H4604000_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Argh, they lost.\nWell, it can't be helped.\nDo your best next time!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...\nI wonder if our cheering wasn't\nenough...)");
                }
            else {
                Voice_PlayVoice("H4604000_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... They lost.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("H4604000_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Don't worry about it.\nThose guys heard your voice.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("H4604000_D01700", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, if you think that your\ncheering wasn't enough, then\npractice more!\nIsn't that right?");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("H4604000_D01800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Do your best!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, thanks...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Yeah, I must try harder with\npractice!)");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 86, 1);
    }
